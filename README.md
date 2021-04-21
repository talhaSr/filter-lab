# Filter Lab
![License](https://img.shields.io/badge/License-MIT-green)

Digital Filters written in C for software implementations. 

## How to Use Them?
`Examples` file will be added soon for filter usage...

## Filter List
All filters that have been added is going to be listed below here:

* N-Point Moving Average Filter



## Math Behind It
### Moving Average
As the name implies, the moving average filter operates by averaging a number of points from the input signal to produce each point in the output signal. In equation form, this is written:
><a href="https://www.codecogs.com/eqnedit.php?latex=\bg_white&space;\large&space;y[n]=\frac{1}{M}\sum_{m=0}^{M-1}x[n-m]" target="_blank"><img src="https://latex.codecogs.com/png.latex?\bg_white&space;\large&space;y[n]=\frac{1}{M}\sum_{m=0}^{M-1}x[n-m]" title="\large y[n]=\frac{1}{M}\sum_{m=0}^{M-1}x[n-m]" /></a>


Where `x[n]` is the input signal,`y[n]` is the output signal, and **M** is the number of points in the average. For example, in a 5 point moving average filter, point 80 in the output signal is given by:
> <a href="https://www.codecogs.com/eqnedit.php?latex=\bg_white&space;\large&space;y[80]=\frac{x[80]&plus;x[79]&plus;x[78]&plus;x[77]&plus;x[76]}{5}" target="_blank"><img src="https://latex.codecogs.com/png.latex?\bg_white&space;\large&space;y[80]=\frac{x[80]&plus;x[79]&plus;x[78]&plus;x[77]&plus;x[76]}{5}" title="\large y[80]=\frac{x[80]&plus;x[79]&plus;x[78]&plus;x[77]&plus;x[76]}{5}" /></a>
## Sources
* [Moving Average](https://en.wikipedia.org/wiki/Moving_average)

# License
Copyright (c) 2021 Talha Sarı

MIT License

*Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:*

*The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.*

*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE*