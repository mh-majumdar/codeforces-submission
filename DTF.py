
import numpy as np
import matplotlib.pyplot as plt

# Given signal x[n]
n = np.arange(0, 21)  # Range of n values
x = np.cos(0.1 * np.pi * n) + np.sin(0.4 * np.pi * n)

# DTFT calculation
w = np.linspace(-np.pi, np.pi, num=400)  # Frequency range
X = np.zeros_like(w, dtype=np.complex128)  # Initialize DTFT

for k, omega in enumerate(w):
    X[k] = np.sum(x * np.exp(-1j * omega * n))

# Plotting the magnitude and phase of DTFT
plt.figure(figsize=(8, 6))

plt.subplot(2, 1, 1)
plt.plot(w, np.abs(X))
plt.xlabel('Frequency (ω)')
plt.ylabel('|X(e^{jω})|')
plt.title('Magnitude of DTFT')

plt.subplot(2, 1, 2)
plt.plot(w, np.angle(X))
plt.xlabel('Frequency (ω)')
plt.ylabel('∠X(e^{jω})')
plt.title('Phase of DTFT')

plt.tight_layout()
plt.show()
