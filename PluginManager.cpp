#include "PluginManager.h"

PluginManager pluginManager; ///< Global instance of pluginManager.

//Who needs constructors
PluginManager::PluginManager() : _plugins(0)
{}


PluginManager::~PluginManager()
{
	for (int i = 0; i < _plugins.size(); i++)
	{
		delete _plugins[i];
	}
	_plugins.clear();
}


void PluginManager::registerPlugin(Plugin* plugin)
{
	_plugins.push_back(plugin);
}


void PluginManager::run(PLUGIN_ARGS)
{
	for (int i = 0; i < _plugins.size(); i++)
	{
		_plugins[i]->run(PLUGIN_EXECUTE_ARGS);
	}
}

void PluginManager::clear()
{
	for (int i = 0; i < _plugins.size(); i++)
	{
		delete _plugins[i];
	}
	_plugins.clear();
}