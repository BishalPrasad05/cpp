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
    file=open(f"new.c","w")
    file.write(f"#include<stdio.h>\n")
    file.write("\n")
    file.write(f"int main()\n")

    time.sleep(5)
    file.write("{\n")
    file.write("\tprintf(\"Hello World\");\n")
    file.write("\treturn 0;\n")
    file.write("}")
    
    # file.write(f"\n#include<stdio.h>\nint main()\n{{\n\tprintf(\"Hello World\");\n\treturn 0;\n}})")
    file.close()

    time.sleep(15)
    # os.remove("test.txt")
    # print("File Removed")
    print(i,end="\n")
    i+=1
    # time.sleep(30)
