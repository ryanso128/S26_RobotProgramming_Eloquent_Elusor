#!/usr/bin/env python3
import time

def main():
    start = time.perf_counter()
    while True:
        time.sleep(.5)
        cur = time.perf_counter()
        elap = cur-start
        print(elap)
        
if __name__=="__main__":
    main()
