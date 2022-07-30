Quick Sort Algorithm

partition(A[], low, high)

[Initialize] Set i=low+1, j=high and
PIVOT=low.

2.[Scan from i to j]

(a) Repeat while A[i] <= A[PIVOT] and
i ≠ PIVOT

i= i + 1

[end of loop]

(b) if PIVOT=i, then return.

(c) if A[i]>A PIVOT]> , then

i.[Interchange A[i] AND A[PIVOT]

TEMP= A[PIVOT] , A[PIVOT] = A[i] ,
A[i] =TEMP

ii. Set PIVOT=i

iii. Go to Step 3.

[end of if structure]

3.[Scan from j to i]

(a) Repeat while A[PIVOT] <= A[j] and
PIVOT ≠ j

j = j - 1

[end of loop]

(b) if PIVOT=j, then return.

(c) if A[PIVOT]>A[j], then

i.[Interchange A[PIVOT] AND A[j]]

TEMP= A[PIVOT] , A[PIVOT] = A[j] ,
A[j] =TEMP

ii. Set PIVOT=j

iii. Go to Step 2.

[end of if structure]
