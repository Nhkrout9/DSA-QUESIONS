class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if(len(word1)!=len(word2)):
            return False
        if(set(word1)!=set(word2)):
            return False
        list1=[]
        list2=[]
        for i in set(word1):
            list1.append(word1.count(i))
        for i in set(word2):
            list2.append(word2.count(i))
        list1.sort()
        list2.sort()
        if(list1!=list2):
            return False
        return True


        
