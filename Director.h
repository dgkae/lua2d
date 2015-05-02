//
//  Director.h
//  Lua2d
//
//  Created by chenbingfeng on 15/4/27.
//  Copyright (c) 2015年 chenbingfeng. All rights reserved.
//

#ifndef __Lua2d__Director__
#define __Lua2d__Director__

#include <stdio.h>
#include "Scene.h"
namespace l2d
{
    class Director
    {
    public:
        static Director& getInstance();
        static int getA();
        // init the window, the OpenGL context attach to it and other things
        // should be called once only ad the begin of your program.
        void init(const int width, const int height);
        
        // running with the scene, if another scene is running, it will pause
        // the new scene must take the place. At any time, there cloud be only
        // one scene is running.
        void runWithScene(Scene* scene);
    private:
        static Director _instance;
        int _width;
        int _height;
        Scene* _scene;
    };
}
#endif /* defined(__Lua2d__Director__) */
