class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        students.sort()
        seats.sort()
        su=0
        for i in range(0,len(seats)):
            su += abs(students[i] -seats[i])
        return su
