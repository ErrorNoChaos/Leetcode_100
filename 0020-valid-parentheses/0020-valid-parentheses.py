class Solution(object):
    def isValid(self, s):
        stack=[]
        hashmap={"}":"{","]":"[",")":"("}
        for c in s:
            if c in hashmap and stack:
                if stack[-1]==hashmap[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        if not stack:
            return True
        else:
            return False
        