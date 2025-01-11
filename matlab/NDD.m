clc
clear all
x=[2,3,4,5,6]      %abscissas
f=[4,7,8,11,15]    %ordinates
p=4.5;             %at which function value needs to be computed
n=length(x);       %no. of enteries             %initiate sum
A=zeros(n,n);      %interpolation table(IT) initialised matrix
A(:,1)=f';        %IT first col
%% Divided difference matrix
for j = 2:n       %column-wise
for i = j:n       %row-wise
A(i,j)=(A(i,j-1)-A(i-1,j-1))/(x(i)-x(i-j+1)); %from matrix
end 
end
%% Value of polynomial
sum=A(1,1)
P(1)=1
for i = 2:n 
    P(i)=P(i-1)*(p-x(i-1))
    sum=sum+P(i)*A(i,i)
end
fprintf('At point % f, the value is %f \n', p,sum);