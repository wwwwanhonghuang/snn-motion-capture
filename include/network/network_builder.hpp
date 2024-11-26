
#ifndef NETWORK_BUILDER_HPP
#define NETWORK_BUILDER_HPP
#include <vector>
#include "network/network.hpp"
#include "neuron_models/neuron.hpp"
#include "connections/connection.hpp"

namespace snnlib{
    struct NetworkBuilder
    {
        snnlib::SNNNetwork* network;
        NetworkBuilder(){
            network = new snnlib::SNNNetwork();
        }
        snnlib::SNNNetwork* build_network(){
            network->initialization();
            return network;
        }
        int add_neuron(std::string neuron_name, snnlib::AbstractSNNNeuron* neuron){
            int size = network->neurons.size();
            network->neurons[neuron_name] = neuron;
            return size;
        }
        int add_connection(std::string connection_name, snnlib::AbstractSNNConnection* connection){
            int size = network->neurons.size();
            network->connections[connection_name] = connection;
            return size;
        }
    };
}
#endif