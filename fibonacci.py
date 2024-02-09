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
    file=open(f"subject2.c","w")
    file.write(f"#include<stdio.h>\n")
    # time.sleep(2)
    file.write(f"#include<conio.h>\n")
    file.write("\n")
    # time.sleep(2)
    file.write(f"int main()\n")
    time.sleep(5)
    file.write("{\n")
    # time.sleep(2)
    file.write(f"\tprintf(\"Hello World{i}\");\n")
    # time.sleep(2)
    file.write("\treturn 0;\n")
    # time.sleep(2)
    file.write("}")

    # file.write(f"\n#include<stdio.h>\nint main()\n{{\n\tprintf(\"Hello World\");\n\treturn 0;\n}})")
    file.close()

    time.sleep(30)
    # os.remove("test.txt")
    # print("File Removed")
    print(i,end="\n")
    i+=1
    # time.sleep(30)
