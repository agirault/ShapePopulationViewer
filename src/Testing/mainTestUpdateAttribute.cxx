//*************************************************************************************************//
//                Test testUpdateAttribute in the class ShapePopulationBase                        //
//*************************************************************************************************//

#include <iostream>
#include <string>
#include <QApplication>
#include <QFileInfo>

#include "testUpdateAttribute.h"

int main(int argc, char *argv[])
{
    TestShapePopulationBase testShapePopulationBase;
    bool test = testShapePopulationBase.testUpdateAttribute( (std::string)argv[1], (std::string)argv[2] );

    if(!test) return 0;
    else return -1;
}
