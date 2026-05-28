from manim import *

class FirstExample(Scene):
    def construct(self):
        blue_circle = Circle(color=BLUE, fill_opacity=0.5)
        green_square = Square(color=GREEN, fill_opacity=0.5)
        green_square.next_to(blue_circle, RIGHT+UP)
        self.play(Create(blue_circle), Create(green_square))