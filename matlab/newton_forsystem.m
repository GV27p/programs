clc
clear
% Input parameters
n = 2;  % Number of equations and unknowns
x = [1; 1];  % Initial approximation (column vector)
tol = 0.00001;  % Tolerance
max_iter = 1000;  % Maximum number of iterations

% Define the system of equations F(x) = 0
F = @(x) [x(1)^2 + x(2)^2 - 4;
          x(1)^2 - x(2)^2 - 1];

% Define the Jacobian matrix J(x)
J = @(x) [2*x(1), 2*x(2);
          2*x(1), -2*x(2)];

% Step 1: Set k = 1
k = 1;

% Step 2: While (k ≤ N) do Steps 3-7
while k <= max_iter
    % Step 3: Calculate F(x) and J(x)
    Fx = F(x);
    Jx = J(x);
    
    % Step 4: Solve the n x n linear system J(x)y = -F(x)
     y = -Jx\Fx;
  % y=-inv(Jx)*Fx; 
    % Step 5: Set x = x + y  
    x = x + y;
    
   % Step 6: Check if ||y|| < tol
    if norm(y) < tol
        fprintf('Solution found: x = [%f, %f]\n', x(1), x(2));
        fprintf('Number of iterations: %d\n', k);
        break;
    end
    
    % Step 7: Increment k
    k = k + 1;
end

% Step 8: If the maximum number of iterations is exceeded
if k > max_iter
    disp('Maximum number of iterations exceeded');
end