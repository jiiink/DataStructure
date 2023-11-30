#--------------------------------------------------------
# Author:      Zoh Que
# Created:     24-02-2023
#--------------------------------------------------------
from collections import Counter

def count_kmers(text, k):
    kmers = []
    n = len(text)
    for i in range(n - k + 1):
        kmer = text[i:i+k]
        kmers.append(kmer)
    kmer_counts = Counter(kmers)
    return kmer_counts



text = "ACGTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCTAGCT"
k = 3
kmer_counts = count_kmers(text, k)
print(kmer_counts)