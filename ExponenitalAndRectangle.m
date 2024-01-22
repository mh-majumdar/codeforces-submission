% Time vector
t = linspace(0, 5, 1000); % Time interval from 0 to 5 seconds

% Exponential signal parameters
A_exp = 1;       % Amplitude
tau = 2;         % Time constant
exp_signal = A_exp * exp(-t / tau);

% Rectangular pulse signal parameters
A_rect = 1.5;    % Amplitude
T_rect = 1;      % Pulse width
rect_signal = A_rect * rectpuls(t - 2, T_rect);

% Create a figure with subplots
figure;

% Subplot 1: Exponential signal
subplot(2, 1, 1);
plot(t, exp_signal, 'b', 'LineWidth', 2);
title('Exponential Signal');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

% Subplot 2: Rectangular pulse signal
subplot(2, 1, 2);
plot(t, rect_signal, 'r', 'LineWidth', 2);
title('Rectangular Pulse Signal');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

% Adjust subplot spacing
sgtitle('Exponential and Rectangular Pulse Signals');
