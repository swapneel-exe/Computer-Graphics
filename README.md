# Computer-Graphics  

## About Computer Graphics:  
The field of computer graphics is a broad and diverse field that exists cross section between computer science and design. It is interested in the entire process of creating computer generated imagery, from creating digital three-dimensional models, to the process of texturing, rendering, and lighting those models, to the digital display of those renderings on a screen.  

### Definition:  
It is the use of computers to create and manipulate pictures on a display device. It comprises of software techniques to create, store, modify, represents pictures.  

Interactive computer graphics work using the concept of two-way communication between computer users. The computer will receive signals from the input device, and the picture is modified accordingly. Picture will be changed quickly when we apply command.  

## DDA Line Drawing Algorithm    

### About DDA Line Drawing Algorithm:   
DDA stands for Digital Differential Analyser. In this algorithm an incremental method of scan conversion of line takes place. Every succeeding pixel is calculated using the results of its predecessor.  

### Advantages:  
(a) It is a faster method than method of using direct use of line equation.  
(b) This method does not use multiplication theorem.  
(c) Plotting of same point twice is not possible as it allows us to detect the change in the value of x and y.  
(d) This method gives overflow indication when a point is repositioned.  
(e) It is an easy method because each step involves just two additions.  

### Disadvantages:  
(a) It involves floating point additions rounding off is done. Accumulations of round off error cause accumulation of error.  
(b) Rounding off operations and floating point operations consumes a lot of time.  
(c) It is more suitable for generating line using the software. But it is less suited for hardware implementation.  

### Algorithm  
Step 1: Start Algorithm  

Step 2: Declare x1,y1,x2,y2,dx,dy,x,y as integer variables   
        where (x1,y1) -> initial points  
              (x2,y2) -> final points  
              (dx,dy) -> differential change  
              (x,y)   -> plotting points  

Step 3: Enter value of x1,y1,x2,y2.  

Step 4: Calculate dx = x2-x1  

Step 5: Calculate dy = y2-y1  

Step 6: If ABS (dx) > ABS (dy)  
       Then step = abs (dx)  
       Else step = abs (dy)  

Step 7: xinc = dx/step  
        yinc = dy/step  
        assign x = x1  
        assign y = y1  

Step 8: Set pixel (x, y)  

Step 9: x = x + xinc  
        y = y + yinc  
        setpixels (Round (x), Round (y))  

Step 10: Repeat step 9 until x = x2  

Step 11: End Algorithm  


## Bresenham Line Drawing Algorithm    

### About Bresenham Line Drawing Algorithm:   
Bresenham Line Drawing Algorithm is an efficient method because it involves only integer addition, subtractions, and multiplication operations. These operations can be performed very rapidly so lines can be generated quickly.

In this method, next pixel selected is that one who has the least distance from true line.    

### Advantages:  
(a) It involves only integer arithematic, so it is simple.  
(b) It avoids generation of duplicate points.  
(c) It can be implemented using hardware because it does not use multiplication and division.  
(d) It is faster than DDA Line Drawing Algorithm as it does not involves floating point calculations.  

### Disadvantages:  
(a) It is meant for basic line drawing only. Smooth lines cannot be generated.  

### Algorithm  
Step 1: Start Algorithm  

Step 2: Declare variable x1,x2,y1,y2,d,i1,i2,dx,dy  

Step 3: Enter value of x1,y1,x2,y2  
                Where (x1,y1) are coordinates of Starting point    
                 (x2,y2) are coordinates of Ending point  

Step 4: Calculate dx = x2-x1  
                Calculate dy = y2-y1  
                Calculate i1=2[*]dy  
                Calculate i2=2[*](dy-dx)  
                Calculate d=i1-dx  

Step 5: Consider (x, y) as starting point and xendas maximum possible value of x.  
                If dx < 0  
                        Then x = x2  
                        y = y2  
                          xend=x1  
                If dx > 0  
                    Then x = x1  
                y = y1  
                        xend=x2  

Step 6: Generate point at (x,y)coordinates.  

Step 7: Check if whole line is generated.  
                If x > = xend  
                Stop.  

Step 8: Calculate co-ordinates of the next pixel  
                If d < 0  
                    Then d = d + i1  
                If d ≥ 0  
          Then d = d + i2  
                Increment y = y + 1  

Step 9: Increment x = x + 1  

Step 10: Draw a point of latest (x, y) coordinates  

Step 11: Go to step 7  

Step 12: End of Algorithm  

