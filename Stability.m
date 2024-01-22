clc; clear all; close all;

% Define the discrete time signal
x = [1 2 3 5 5];

% Find the poles of the signal
poles = roots(poly(x));

% Check if the poles lie inside the unit circle
if all(abs(poles) <= 1)
  disp('The signal is stable.');
else
  disp('The signal is unstable.');
end
