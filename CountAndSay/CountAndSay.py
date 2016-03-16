class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        # result = []
        # tmp = str(n) + '0'
        # count = 1
        # for i in range(len(tmp)-1):
        #     if tmp[i] == tmp[i+1]:
        #         count += 1
        #     else:
        #         result.append(str(count))
        #         result.append(tmp[i])
        #         count = 1
        # return ''.join(result)
        res = []
        res.append('1')
        for i in range(n-1):
            res.append(self.create(res[i]))
        return res[n-1]
        
        
    def create(self, str1):
        tmp = str1 + '0'
        result = []
        count = 1
        for i in range(len(tmp)-1):
            if tmp[i] == tmp[i+1]:
                count += 1
            else:
                result.append(str(count))
                result.append(tmp[i])
                count = 1
        return ''.join(result)