<div id="preview">
  <!-- Header. -->  
  <header id="header">

    <div class="logo">
      <img class="img-responsive" src="<?php
        $theme = variable_get('theme_default', 'bartik');
        if (theme_get_setting('default_logo', $theme)) {
          print '/' . drupal_get_path('theme', 'roomify_bootstrap') . '/color/images/logo.png';
        }
        else {
          print file_create_url(theme_get_setting('logo_path', $theme));
        }
      ?>">
    </div>
    <div class="main-menu">
      <ul class="menu nav navbar-nav">
        <li>
          <a href="/">Activities </a>
        </li>
        <li>
          <a href="/">Blog</a>
        </li>
        <li>
          <a href="/">Location</a>
        </li>
        <li>
          <a href="/">Contact Us</a>
        </li>
      </ul>
    </div>
    <span class="roomify-sidebar-link">
      <a class="roomify-sidebar-menu-toggle" href="javascript:void(0)">
        <!-- PRINT SVG USER ICON -->
        <svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" version="1.1" x="0px" y="0px" viewBox="0 0 100 100" enable-background="new 0 0 100 100" xml:space="preserve"><g><path d="M50,5C25.187,5,5,25.187,5,50s20.187,45,45,45s45-20.187,45-45S74.813,5,50,5z M50,91.537   C27.097,91.537,8.463,72.903,8.463,50S27.097,8.463,50,8.463S91.537,27.097,91.537,50S72.903,91.537,50,91.537z"></path><path d="M50.003,54.795c9.596,0,16.12-7.783,16.12-17.382c0-9.601-6.524-17.381-16.12-17.381c-9.602,0-16.126,7.78-16.126,17.381   C33.877,47.012,40.401,54.795,50.003,54.795z"></path><path d="M63.022,53.654c-3.442,3.091-7.948,4.918-13.02,4.918c-5.074,0-9.583-1.827-13.025-4.918   c-8.187,4.477-13.839,12.976-14.267,22.859C29.634,83.637,39.306,88.077,50,88.077s20.366-4.44,27.292-11.563   C76.864,66.63,71.209,58.131,63.022,53.654z"></path></g></svg>
      </a>
    </span>
  </header>

   <!-- Content. -->  
  <div id="main-content">
    <div class="content">
      <p> Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. </p>
    </div>

  </div>

   <!-- Footer. -->  
  <footer id="footer">
  	<div class="content">
  		<p>Roomify for Accommodations - Copyright © 2016</p>
  	</div>

  </footer>

</div>