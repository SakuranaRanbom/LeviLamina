# LeviLamina

![LeviLamina](https://socialify.git.ci/LiteLDev/LeviLamina/image?description=1&font=Raleway&forks=1&issues=1&logo=https%3A%2F%2Fraw.githubusercontent.com%2FLiteLDev%2FLeviLamina%2FHEAD%2Fdocs%2Fimg%2Flogo.svg&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Auto)

A lightweight, modular and versatile plugin loader for Minecraft Bedrock Server BDS, formerly known as LiteLoaderBDS

LeviLamina is an unofficial plugin loader designed to offer indispensable API support for Minecraft Bedrock Server BDS. It boasts a comprehensive API, an array of utility interfaces, a robust event system, and comprehensive support for basic interfaces. LeviLamina provides an expansive API, a powerful event system, and a wealth of encapsulated development infrastructure interfaces, forming a solid foundation for augmenting the Bedrock Edition BDS with additional gameplay features and functionalities. By leveraging plugins, the process of extending BDS functionality becomes effortless, with a user-friendly development process and an adaptable approach.

Developers can effortlessly author plugins in languages such as C++, JavaScript, Lua, Python, C#, and others. This seamless integration empowers them to effortlessly expand and personalize BDS functionality, facilitating an intuitive learning experience and unparalleled flexibility.

## Security

LeviLamina (hereinafter referred to as "this software") is developed and provided by LiteLDev (hereinafter referred to as "the developer"). This software is designed to enable users to extend the functionality of Minecraft Bedrock Server BDS (hereinafter referred to as "BDS") by loading plugins. This software is not affiliated with Mojang Studios (hereinafter referred to as "Mojang") or Microsoft Corporation (hereinafter referred to as "Microsoft"). The developer is not responsible for any content, quality, functionality, security or legality of any plugins loaded by this software. Users should use this software at their own discretion and assume all related risks.

The developer does not guarantee the stability, reliability, accuracy or completeness of this software. The developer is not liable for any defects, errors, viruses or other harmful components that may exist in this software. The developer is not liable for any direct or indirect damages (including but not limited to data loss, device damage, profit loss etc.) caused by the use of this software.

The developer reserves the right to modify, update or terminate this software and its related services at any time without prior notice to users. Users should back up important data and check regularly for updates of this software.

Users should comply with relevant laws and regulations when using this software, respect the intellectual property rights and privacy rights of others, and not use this software for any illegal or infringing activities. If users violate the above provisions and cause any damage to any third party or are claimed by any third party, the developer does not bear any responsibility.

If you have any questions or comments about this disclaimer, please contact the developer.

## Install

This project uses [lip](https://github.com/lippkg/lip). Go check them out if you don't have them locally installed.

First, create a new directory for your Minecraft server and enter it:

```sh
mkdir myserver
cd myserver
```

Then, install LeviLamina bundled with Minecraft Bedrock Server using lip:

```sh
lip install github.com/LiteLDev/LeviLamina
```

For more information, please refer to [the documentation](https://levilamina.liteldev.com).

### Updating

When it comes to data security, we advise against updating LeviLamina in its current location. Instead, we recommend creating a new directory, installing the new version of LeviLamina there, and subsequently copying the `worlds` directory from the old location to the new one. Next, follow the instructions provided by the plugin developers to migrate the configuration files and data files of the plugins you are using to the new directory.

However, if you insist on updating in the same location, you can utilize the following command to update LeviLamina:

```sh
lip install --upgrade github.com/LiteLDev/LeviLamina
```

## Usage

To start the server, simply run `bedrock_server_mod.exe`:

```sh
./bedrock_server_mod.exe
```

For more information, please refer to [the documentation](https://levilamina.liteldev.com).

## Star History

![Star History Chart](https://api.star-history.com/svg?repos=LiteLDev/LeviLamina&type=Date)

## Thanks

We extend sincere thanks to [all donors](https://5g8svn.sharepoint.com/:x:/s/LiteLDev/EXx2ndbuC-9Bj5SR-FlJ-HUBZWy0wODjQCDb8OkzuKTFJg?e=QBF6nQ)!

## Contributing

Feel free to dive in! [Open an issue](https://github.com/LiteLDev/LeviLamina/issues/new/choose) or submit PRs.

LeviLamina follows the [Contributor Covenant](https://www.contributor-covenant.org/version/2/1/code_of_conduct/) Code of Conduct.

### Contributors

This project exists thanks to all the people who contribute.

![Contributors](https://contrib.rocks/image?repo=LiteLDev/LeviLamina)

## License

LGPL-3.0-only © LiteLDev
