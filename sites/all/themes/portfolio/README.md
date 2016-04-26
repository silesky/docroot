# Required Modules
- **Single Page Site** https://www.drupal.org/project/single_page_site
  - The Single Page Site module does some cool stuff that would otherwise take a lot of hacking: it lets you order your pages based on the order of your navigation menu (i.e outputs all nodes, sorted by menu weight, without using views).
 - it automatically links all your pages to the menu with anchor tags, so when you click a link on the top navigation, you scroll down to the appropriate place on the page.

/?q=admin/config/system/single-page-site
Single Page Site Module Configuration:
 - Modules -> Single Page Site -> Configuration
   - Menu -> Main Menu
   - Menu Class/Id -> .main-menu
   - Title -> Whatever you want
   - Menu item selector -> *blank*
   - Tag -> h2
   - Homepage -> *checked*
-----------------------------

Other Modules:
- ** Code Per Node (optional) **
  - /admin/structure/types/manage/content_microsite ->
    - /admin/structure/types/manage/calendar_microsite ->
  Enable custom CSS per node... so users who are so disposed can tweak pages without contacting support =)
- ** Field Collections **
----
