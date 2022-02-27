 #include "Screen.hpp"

        Screen::Screen(int _x, int _y, int _width, int _height, int _dx,int _dy, int _color):
        x(_x), y(_y), width(_width),height(_height),dx(_dx),dy(_dy),color(_color)
        {
    }
    void Screen::setScreen(int _w, int _h){sWidth = _w; sHeight = _h;}
    int Screen::getTop(){return y;}
    int Screen::getBottom(){return y + height;}
    int Screen::getRight(){return x + width;}
    int Screen::getLeft(){return x;}
    void Screen::setX(int _x){x = _x;}
    void Screen::setY(int _y){y = _y;}
    int Screen::getX(){return x;}
    int Screen::getY(){return y;}

    void Screen::_draw(int c){
        setfillstyle(SOLID_FILL, c);
        bar(x,y,x + width, y+height);
    }
    void Screen::draw(){
        _draw(color);
    }
    void Screen::undraw(){
        _draw(BLACK);
    }
    void Screen::move(){
        undraw();
        
        x += dx;
        y += dy;
        // if(getTop() <= 0){dy = -dy;}
        // else if(getBottom() >= sHeight ){dy = -dy;}
        // if(getLeft() <= 0){dx = -dx; }
        // else if(getRight() >= sWidth ){dx = -dx;}

        draw();
    }
    void Screen::setDefaultPosition(){
// change it later
        // initialX = sWidth / 4;
        initialX = 150;
        initialY =  sHeight + 20;
    }
    void Screen::getNextRectangle(){
       
            undraw();
            color += 1;
            x = initialX;
            y = initialY;
            draw();
    }

