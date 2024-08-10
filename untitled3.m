% Define the objective function to maximize the volume
V = @(l,w) l*w*h;

% Define the constraint function to represent the surface area constraint
surfaceArea = @(l,w) 2*l*w + 2*l*h + 2*w*h;

% Set the surface area constraint equal to 162 square inches
constraint = @(l,w) surfaceArea(l,w) - 162;

% Use Lagrange multipliers to find the maximum volume
[lambda, lstar, wstar] = fmincon(V, [6,6], [], [], constraint, 0);

% Calculate the height using the surface area constraint
hstar = (162 - 2*lstar*wstar) / (2*lstar + 2*wstar);

% Display the maximum volume and the corresponding dimensions
fprintf('Maximum volume: %f\n', V(lstar, wstar));
fprintf('Dimensions: l = %f, w = %f, h = %f\n', lstar, wstar, hstar);