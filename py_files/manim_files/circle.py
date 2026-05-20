from manim import * #noqa: F405

class createCircle(Scene):
    def construct(self):
        circle = Circle()
        circle.set_fill(PINK, opacity = 0.5)
        self.play(Create(circle))

class SquaretoCircle(Scene):
    def construct(self):
        square = Square()
        circle = Circle()
        square.set_fill(BLUE, opacity = 0.75)
        square.rotate(PI/4)
        circle.set_fill(PINK, opacity = 0.75)
        self.play(Create(square))
        self.play(Transform(square, circle))
        self.play(FadeOut(circle))

class animatesquaretocircle(Scene):
    def construct(self):
        circle = Circle()
        square = Square()
        square.set_stroke(color=WHITE, width = 3)
        circle.set_stroke(color = WHITE, width = 3)
        self.play(Create(square))
        self.play(square.animate.set_fill(BLUE, opacity = 0.5))
        self.play(square.animate.rotate(PI/4))
        self.play(Transform(square, circle))
        self.play(circle.animate.set_fill(GREEN, opacity = 0.5))

class differentrotations(Scene):
    def construct(self):
        left_triangle = Triangle(color = BLUE, fill_opacity = 0.7).shift(2*LEFT)
        right_triangle = Triangle(color = GREEN, fill_opacity = 0.7).shift(2*RIGHT)
        self.play(
            left_triangle.animate.rotate(PI), Rotate(right_triangle, angle = PI), run_time = 2
        )
        self.wait()

class tr_retr(Scene):
    def transform(self):
        a = Circle()
        b = Square()
        c = Triangle()
        self.play(Transform(a, b))
        self.play(Transform(a, c))
        self.play(FadeOut(a))
    def replacement_transform(self):
        a = Circle()
        b = Square()
        c = Triangle()
        self.play(ReplacementTransform(a, b))
        self.play(ReplacementTransform(b, c))
        self.play(FadeOut(c))
    def construct(self):
        self.transform()
        self.wait(1)
        self.replacement_transform()