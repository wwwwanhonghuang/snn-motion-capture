#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

namespace snnlib{
    struct AbstractSNNNeuron
    {
        /* data */
    };

    struct AbstractSNNSynapse
    {
        /* data */
    };

    struct AbstractSNNConnection
    {
        /* data */
    };

    struct SNNNetwork{

    };

    struct SNNSimulator
    {
        /* data */

        public:
            void simulate(snnlib::SNNNetwork network, int time_steps){

            }
    };

    struct NetworkBuilder
    {
        /* data */
    };
       
}

std::vector<snnlib::AbstractSNNNeuron> build_neurons(){

}


std::vector<snnlib::AbstractSNNSynapse>  build_synapse(){

}


std::vector<snnlib::AbstractSNNConnection> build_connections(){

}

snnlib::SNNNetwork build_network(){

}


void simulation_main(snnlib::SNNNetwork motion_capture_network, int time_steps){
    snnlib::SNNSimulator simulator;
    simulator.simulate(motion_capture_network, time_steps);
}

int main(){
    std::unordered_map<std::string, snnlib::AbstractSNNNeuron> neurons = build_neurons();
    build_synapse();
    build_connections();
    auto network = build_network();

    int time_step = 2000;
    simulation_main(network, time_step);
}