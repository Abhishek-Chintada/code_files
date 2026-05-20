from manim import *

class field(Scene):
    def construct(self):
        dot = Dot((0, 0, 0))
        arrow = Arrow((0, 0, 0), (2, 2, 1), buff = 0)
        numberplane = NumberPlane()
        origin_text = Text('(0, 0)').next_to(dot, DOWN)
        tip_text = Text('(2, 2)').next_to(arrow.get_end(), RIGHT)
        self.add(numberplane, dot, arrow, origin_text, tip_text)