#!/usr/bin/python3
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        """ counter = 0
            for i in range(len(stones))
        if jewels[i] = stone[i]:
        counter += 1
        return (counter)
        """
        check_jewels = set(jewels)
        total = 0
        for i in stones:
            if i in check_jewels:
                total += 1
        return total
