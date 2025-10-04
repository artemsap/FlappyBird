#include <SFML/Graphics.hpp>

#include <memory>
#include <unordered_map>

class AssetManager
{
public:
	static sf::Texture GetAssetTexture(const std::string& name, bool isRepeated);

	AssetManager(const AssetManager&) = delete;
	AssetManager(AssetManager&&) = delete;

	AssetManager& operator=(const AssetManager&) = delete;
	AssetManager& operator=(AssetManager&&) noexcept = delete;


private:
	AssetManager();
	static std::shared_ptr<AssetManager> get();

	const std::unordered_map<std::string, sf::IntRect> marked_assets_by_name = {
		{"backGroundDay", sf::IntRect({0,0}, {143,255})},
		{"ground", sf::IntRect({292,0}, {167, 55})}
	};

	sf::Image textureMap;
};