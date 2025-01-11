clc
clear all
x=[0.1 0.4 0.5 0.7 0.7 0.9] %input('Enter list of abscissas: \n')
y=[0.61 0.92 0.99 1.52 1.47 2.03]%input('Enter list of ordinates: \n')
N=input('Enter 2 for linear fit, 3 for quadratic fit and so on: \n')
A=zeros(N,N)
for i=1:N
    for j=1:N
        A(i,j)=sum(x.^(i+j-2))
    end
end
B=zeros(N,1)
for k=1:N
    B(k)=sum((x.^(k-1)).*y)
end
u=inv(A)*B

