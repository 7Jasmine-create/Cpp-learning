import math

a=float(input("请输入a:"))
b=float(input("请输入b:"))
c=float(input("请输入c:"))

if a==0:
    print("这不是一元二次方程")
else:
    delta=b**2-4*a*c
    if delta<0:
        print("该方程没有实数根")
    elif delta==0:
        x=-b/(2*a)
        pint(f"该方程有一个实数根:x={x:2f}")
    if delta>0:
        x1=(-b+math.sqrt(delta))/(2*a)
        x2=(-b-math.sqrt(delta))/(2*a)
        print(f"该方程有两个实数根：x1={x1:.2f},x2={x2:.2f}")
        
