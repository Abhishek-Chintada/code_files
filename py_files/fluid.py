import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# ==========================================
# 1. Setup and Initialization
# ==========================================
# Point of interest and reference time
x0, y0 = 1.0, 1.0
t0 = 1.0

# Time span for the animation (e.g., from t=0 to t=2 seconds)
t_min = 0.0
t_max = 2.0
num_frames = 150
t_vals = np.linspace(t_min, t_max, num_frames)

# Setup the figure and axis
fig, ax = plt.subplots(figsize=(10, 7))
ax.set_xlim(-1, 10)
ax.set_ylim(-8, 5)
ax.set_xlabel('x-coordinate')
ax.set_ylabel('y-coordinate')
ax.set_title('Fluid Dynamics Evolution Metrics')
ax.grid(True, linestyle='--', alpha=0.6)

# Initialize plot objects (empty data to start)
stream_line, = ax.plot([], [], 'b-', linewidth=2, label='Streamline')
path_line,   = ax.plot([], [], 'r--', linewidth=2, label=f'Pathline')
streak_line, = ax.plot([], [], 'g-.', linewidth=2, label=f'Streakline')
point,       = ax.plot([x0], [y0], 'ko', markersize=6, label=f'Origin Point ({x0}, {y0})')

time_text = ax.text(0.05, 0.95, '', transform=ax.transAxes, fontsize=12,
                    verticalalignment='top', bbox=dict(boxstyle='round', facecolor='white', alpha=0.8))

ax.legend(loc='lower left')

# ==========================================
# 2. Kinematic Equations
# ==========================================
# Pathline pre-computation (a single particle's trajectory over time)
path_x_full = -0.5 * t_vals - 0.25 + 1.75 * np.exp(2 * (t_vals - 1))
path_y_full = 2 * t_vals + 2 - 3 * np.exp(t_vals - 1)

def update(frame_index):
    """Update function for FuncAnimation. Evaluates lines at current time t."""
    t = t_vals[frame_index]

    # --- A. Streamline at time t ---
    # Equation: y = 2t + (1 - 2t) * sqrt((2x + t) / (2 + t))
    # Domain restriction: 2x + t >= 0  => x >= -t/2
    x_stream = np.linspace(max(-t/2, -1), 10, 400)
    # np.maximum ensures no floating point errors push the value slightly below 0
    val_inside = np.maximum((2 * x_stream + t) / (2 + t), 0)
    y_stream = 2 * t + (1 - 2 * t) * np.sqrt(val_inside)
    stream_line.set_data(x_stream, y_stream)

    # --- B. Pathline up to time t ---
    # Shows the physical trail left by the particle from t_min up to the current time t
    current_t_mask = t_vals <= t
    path_line.set_data(path_x_full[current_t_mask], path_y_full[current_t_mask])

    # --- C. Streakline at time t ---
    # Evaluated at observation time t, for particles released at times tau <= t
    tau = np.linspace(t_min, t, 200)
    x_streak = -0.5 * t - 0.25 + (1.25 + 0.5 * tau) * np.exp(2 * (t - tau))
    y_streak = 2 * t + 2 - (1 + 2 * tau) * np.exp(t - tau)
    streak_line.set_data(x_streak, y_streak)

    time_text.set_text(f'Time (t) = {t:.2f}')

    return stream_line, path_line, streak_line, time_text

# ==========================================
# 3. Animation and Output
# ==========================================
# Create the animation
ani = FuncAnimation(fig, update, frames=num_frames, interval=50, blit=True)

# To view the animation interactively in a Python window:
plt.show()

# To save the animation as a GIF for your Google Classroom submission:
# (Uncomment the two lines below. Note: Requires 'pillow' library installed: `pip install pillow`)
print("Saving animation to GIF...")
ani.save('fluid.gif', writer='pillow', fps=20)
