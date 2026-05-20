from manim import *

class line_equation(Scene):
    def construct(self):
        dot1 = Dot((-2, -1, 0))
        dot2 = Dot((2, 1, 0))
        line = Line(dot1.get_center(), dot2.get_center(), color = ORANGE)
        b1 = Brace(line)
        b1text = b1.get_text("Horizontal Distance")
        b2 = Brace(line, direction = line.copy().rotate(PI/2).get_unit_vector())
        b2text = b2.get_tex("x - x_1")
        self.add(dot1, dot2, line, b1, b1text, b2, b2text)