"""
 * @file uniqueEmailAddress.py
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/unique-email-addresses/
 *
"""

class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        em = {}
        for email in emails:
            s = email.split("@")
            s[0] = (s[0].split("+"))[0]
            s[0] = "".join(s[0].split("."))
            if s[1] in em:
                flag = False
                for i in em[s[1]]:
                    if i == s[0]:
                        flag = True
                if flag == False:
                    em[s[1]].append(s[0])
            else:
                em[s[1]] = [s[0]]
        cnt = 0
        print(em)
        for k, v in em.items():
            cnt+=len(v)
        return cnt
