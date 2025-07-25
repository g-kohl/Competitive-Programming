import sys
from itertools import product

input = sys.stdin.readline

def read_string():
    s = input()
    return(list(s[:len(s) - 1]))

def solve():
    M_ = read_string()
    N_ = read_string()

    m_indices = [i for i, c in enumerate(M_) if c == '*']
    n_indices = [i for i, c in enumerate(N_) if c == '*']

    total_corrupt = len(m_indices) + len(n_indices)

    for bits in product('01', repeat=total_corrupt):
        m_copy = M_[:]
        n_copy = N_[:]

        for i, idx in enumerate(m_indices):
            m_copy[idx] = bits[i]

        for i, idx in enumerate(n_indices):
            n_copy[idx] = bits[len(m_indices) + i]

        m_val = to_int(m_copy)
        n_val = to_int(n_copy)

        if n_val != 0 and m_val % n_val == 0:
            print(''.join(m_copy))
            return
        
def to_int(bits):
    return int(''.join(bits), 2)

solve()