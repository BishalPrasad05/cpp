# def fibo(first,second,k):
#     if k==0:
#         return
#     else:
#         print(first)
#         fibo(second,first+second,k-1)

# fibo(0,1,10)
import os,time
i=0
while (True):
    file=open(f"test/test{i}.txt","w")
    file.write(f"Hello World {i}")
    file.close()

    time.sleep(35)
    # os.remove("test.txt")
    # print("File Removed")
    print(i,end="\n")
    i+=1
    # time.sleep(30)
