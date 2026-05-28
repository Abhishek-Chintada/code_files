from manim import *

class Positioning(Scene):
    def construct(self):
        plane = NumberPlane()
        self.play(DrawBorderThenFill(plane))
        red_dot = Dot(color = RED)
        green_dot = Dot(color = GREEN)
        green_dot.next_to(red_dot, RIGHT + UP) # RIGHT == [1, 0, 0]
        self.play(DrawBorderThenFill(red_dot), DrawBorderThenFill(green_dot))
        self.wait(0.5)

        # Shifting
        s = Square(color = ORANGE, fill_opacity = 0.5)
        self.play(DrawBorderThenFill(s))
        self.play(s.animate.shift(2*UP + 3*RIGHT))
        self.wait(0.5)

        # Moving
        c = Circle(color = PURPLE, fill_opacity = 0.5)
        self.play(DrawBorderThenFill(c))
        self.play(c.animate.move_to([-3, -2, 0]))

        # Align to
        c2 = Circle(color = RED, fill_opacity = 0.5, radius = 0.5)
        c3 = c2.copy().set_color(YELLOW)
        c4 = c2.copy().set_color(PINK)
        self.play(DrawBorderThenFill(c2))
        self.play(c2.animate.align_to(s, UP))
        self.play(DrawBorderThenFill(c3))
        self.play(c3.animate.align_to(c))
        self.play(DrawBorderThenFill(c4))
        self.play(c4.animate.align_to(s, DOWN))
        self.wait(0.5)
