#pragma once

#include <list>
#include <memory>
#include <functional>
#include <segments.cpp>

class Map{
    public:
    Map(std::pair<int, int> pair){
        this ->m_mapDimension = pair;
    }
    std::pair<int,int> getMap(){
        return this->m_mapDimension;
    }

    private:
    std::pair<int, int> m_mapDimension;
};