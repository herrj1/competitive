def is_leap(year):
    leap = False
    # Write your logic here
    if year >= 1900 and year <= 1000000:
        if year % 4==0:
            if year % 100==0:
                if year % 400==0:
                    leap = True
                else:
                    leap = False
            else:
                leap = True
                
    return leap

year = int(raw_input())
print is_leap(year)
