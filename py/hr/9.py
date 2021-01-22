if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())

  
   # print( [x for x in arr if n == x])
    
    for x in arr:
        if x == n:
            print x
    