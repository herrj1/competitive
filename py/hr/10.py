if __name__ == '__main__':
    n = int(raw_input())
    e = raw_input().split()
    arr = map(int, e)
    lis = set(arr)
    sortedArr = sorted(lis)
    
    print sortedArr[-2]