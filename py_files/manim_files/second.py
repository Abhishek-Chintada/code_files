from manim import *
import numpy as np

class SecondExample(Scene):
    def construct(self):
        ax=Axes(x_range=(-3, 3), y_range = (-3, 3))
        curve1 = ax.plot(lambda x: (x+2)*x*(x-2), color=GREEN)
        curve2 = ax.plot(lambda x: (x**2 - 2), color = BLUE)
        area1 = ax.get_area(curve1, x_range=(0, 2), color = GREEN)
        area2 = ax.get_area(curve2, x_range=(-np.sqrt(2), np.sqrt(2)), color = BLUE)
        self.play(Create(ax))
        self.wait()
        self.play(Create(curve1), run_time = 2)
        self.play(Indicate(curve1), color = GREEN)
        self.wait()
        self.play(FadeIn(area1), run_time = 2)
        self.play(Indicate(area1), color = GREEN)
        self.wait()
        self.play(Transform(curve1, curve2), FadeOut(area1), run_time = 2)
        self.play(FadeIn(area2), run_time = 2)
        self.wait()
        self.play(Indicate(curve2), color = BLUE)
        self.play(Indicate(area2), color = BLUE)
        self.wait()
        self.play(FadeOut(area2))
        self.play(Uncreate(curve2), run_time = 2)
        self.play(Uncreate(curve1), run_time = 2)
        self.play(Uncreate(ax))
        self.wait()

class SquareToCircle(Scene):
    def construct(self):
        blue_square = Square(color = BLUE, fill_opacity = 0.5)
        green_circle = Circle(color = GREEN, fill_opacity = 0.5)
        self.play(DrawBorderThenFill(blue_square))
        self.play(Indicate(blue_square, color = BLUE), run_time = 2)
        self.play(ReplacementTransform(blue_square, green_circle), run_time = 0.5)
        self.play(Circumscribe(green_circle, buff = 1), run_time = 1)
        self.wait()
        self.play(Uncreate(green_circle), run_time = 1.5)
        self.wait()