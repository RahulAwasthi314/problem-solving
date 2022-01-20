"""
  @file complexNums.py
  @author Rahul Awasthi (awasthir@pm.me)
  
  @brief 
  try out the problem here:
    https://www.hackerrank.com/challenges/class-1-dealing-with-complex-numbers
    
"""



class Complex(object):
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary
        
    def __add__(self, no):
        return Complex(self.real + no.real, self.imaginary + no.imaginary)
    def __sub__(self, no):
        return Complex(self.real - no.real, self.imaginary - no.imaginary)
    def __mul__(self, no):
        return Complex(self.real * no.real - (self.imaginary * no.imaginary), self.real * no.imaginary + self.imaginary * no.real)
    def __truediv__(self, no):
        a = Complex(no.real, -no.imaginary)
        x = no.real**2 + no.imaginary**2
        return Complex((
    (self.real * a.real) - (self.imaginary * a.imaginary))/x,
    ((self.real * a.imaginary) + (self.imaginary * a.real))/x)
    def mod(self):
        return Complex((self.real**2 + self.imaginary**2)**0.5, 0.00)
    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result

