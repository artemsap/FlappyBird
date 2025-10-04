#include "AssetManager.h"

sf::Texture AssetManager::GetAssetTexture(const std::string& name, bool isRepeated) 
{
	auto manager = get();
	auto texture = sf::Texture(manager->textureMap, false, manager->marked_assets_by_name.at(name));
	texture.setRepeated(isRepeated);
	return texture;
}

std::shared_ptr<AssetManager> AssetManager::get()
{
	static std::shared_ptr<AssetManager> manager(new AssetManager);
	return manager;
}

AssetManager::AssetManager() : textureMap("assets/texture_map.png")
{
}
