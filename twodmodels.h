//
//  twodmodels.h
//  twodmodels
//
//  Created by Jie Wang on 3/12/19.
//  Copyright © 2019 Jie Wang. All rights reserved.
//

#ifndef twodmodels_h
#define twodmodels_h

#include "phpfaffian.h"

class TwoDModels:public Msector{
private:
    int Nsite;
    
public:
    TwoDModels();
    TwoDModels(int);
    ~TwoDModels();
};

#endif /* twodmodels_h */
