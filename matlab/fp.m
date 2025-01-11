%% Fixed point
clc
clear all
f=@(x) 2^x-5*x+2;
g=@(x) (2^x+2)/5;
 %ans is 0.7322;7 iterations;tol=0.0001;a=-1,b=1
syms x
 h= @(x) diff(g(x));
iter=1;
x0=input('Enter the intial guess=');
tol=input('Enter the tolerance required='); 
x1=g(x0);
error=abs(x1-x0);
while(error>tol)
if abs(h(x0))>1
    disp('Convergence condition fails')
    break;
end
x1=g(x0);
error=abs(x1-x0);
x0=x1;
iter=iter+1;
end
fprintf('Root of f(x) correct upto %f decimal places is %f after %d iterations',tol,x1,iter);

