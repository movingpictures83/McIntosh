#ifndef MCINTOSHPLUGIN_H
#define MCINTOSHPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class McIntoshPlugin : public Plugin
{
public: 
 std::string toString() {return "McIntosh";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
