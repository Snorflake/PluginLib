#pragma once
#include "Plugin.h"
#include <vector>
/*!
	This is the plugin manager.
*/
class PluginManager
{
public:
	/*!
		This inits everything we need.
	*/
	PluginManager();
	/*!
		Destructor || Removes all plugins from the array
	*/
	~PluginManager();
	/*!
		Usage: registerPlugin(&<PLUGIN>, PLUGIN_ARGS)
		Registers a plugin to the local array.
	*/
	void registerPlugin(Plugin* plugin);
	/*!
		Loops through every plugin and executes them
	*/
	void run(PLUGIN_ARGS);

	/*!
		Removes all plugins from the array
	*/
	void clear();

private:
	std::vector<Plugin*> _plugins; ///< Array of plugins

};

extern PluginManager pluginManager; ///< Global instance of pluginManager.
