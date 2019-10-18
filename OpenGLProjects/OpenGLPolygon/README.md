**n:** number of edges of polygon we want to draw <br>
**α:** center angle of the circle that sees one side of the polygon **(360/n)** <br>
**r:** radius

First, we draw a circle with a radius r.
Then, with the formula **360/n**, we find that we will move on the circle at an escalating angle. 
Since we draw a smooth hexagon, we will mark our points on the circle with a center angle of **360/6=60** degrees.
To put it more clearly, the points of the polygon are: 0&deg;, 60&deg;, 120&deg;, 180&deg;, 240&deg;, 300&deg; There will be dots on the circle corresponding to the angles. 
Finally we will connect these dots and get our smooth hexagon.

![Image of OpenGLPolygon](https://github.com/mhkarazeybek/CPP/blob/master/OpenGLProjects/OpenGLPolygon/images4readme/opengl_polygon.jpeg)
