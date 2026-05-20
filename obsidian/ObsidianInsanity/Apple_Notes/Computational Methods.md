IITH


## Solution finding methods.

1. Gauss Elimination (Waste of computational Power)
2. Inverse Method (even larger waste of time due to the calculation of inverse)
3. Cramers rule (also involves the calculation of the determinant which wastes a lot of the computation power.)
4. LU decomposition (Doolittle - unit lower triangular matrix, Crouts - unit upper triangular matrix, Cholesky - for positive definite matrices i.e, U = LT)
5. Tridiagonal Thomas Algorithm - (applicable for sparse matrices and the solution is found by backward substitution)

### QR Factorisation Methods.

1. General Grahn - Schmidt process. (Involves considering each column as a vector and making the other column vectors of A to be perpendicular to the previous ones. That is we are making the matrix orthogonally. - Q, R is an upper triangular matrix btw).
2. Householder Method - (we are making a mirror through which we reflect the column of A to the respective axis. A clean and Computationally effective method. Should take care of the catastrophic cancellation btw)
3. Givens Rotations - (here instead of reflecting through a mirror we just rotate the given column vector of A onto the respective axis.)
Note - The householder method is suitable for the large and dense matrices whereas the givens method is suitable for the matrices which are sparse. Why? - because if we apply the householder to the sparse matrix, we may destroy the zeroes due to the rounding errors. Hence givens is suitable.

### Iterative Methods.

1. Jacobi method - This is also named as the snapshot method by gem’s contribution. (In this method, we first guess the answer, find the residue and use it to better our guess. Basically we are playing a guess game.)
2. Gauss-Siedel Method - This is named as the relay method - (it basically uses the already calculated values of the previous variables also (other than using the old values like jacobi), and gets to the answer fast, other than that, Jacobi and gauss - siedel are Loke brothers in arms.)