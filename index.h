<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Privacy Policy – Smart Compass</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; }
    body {
      font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif;
      background: #f5f7fa;
      color: #1a1a2e;
      line-height: 1.75;
    }
    header {
      background: #0a0e1a;
      color: #f0c040;
      padding: 36px 24px 28px;
      text-align: center;
    }
    header h1 { font-size: 1.8rem; letter-spacing: 1px; }
    header p  { font-size: 0.9rem; color: #aac4e0; margin-top: 6px; }
    main {
      max-width: 800px;
      margin: 36px auto;
      padding: 0 20px 60px;
    }
    h2 {
      font-size: 1.1rem;
      color: #0a0e1a;
      margin: 32px 0 10px;
      padding-bottom: 6px;
      border-bottom: 2px solid #f0c040;
    }
    p, li { font-size: 0.95rem; color: #333; }
    ul { padding-left: 22px; margin-top: 6px; }
    ul li { margin-bottom: 4px; }
    .badge {
      display: inline-block;
      background: #e8f0fe;
      color: #1a56aa;
      font-size: 0.78rem;
      font-weight: 600;
      padding: 2px 10px;
      border-radius: 12px;
      margin-right: 4px;
      vertical-align: middle;
    }
    table {
      width: 100%;
      border-collapse: collapse;
      margin-top: 12px;
      font-size: 0.9rem;
    }
    th {
      background: #0a0e1a;
      color: #f0c040;
      text-align: left;
      padding: 10px 14px;
    }
    td {
      padding: 9px 14px;
      border-bottom: 1px solid #e0e0e0;
    }
    tr:nth-child(even) td { background: #f9f9f9; }
    .highlight {
      background: #fff8e1;
      border-left: 4px solid #f0c040;
      padding: 12px 16px;
      border-radius: 4px;
      margin-top: 16px;
      font-size: 0.9rem;
    }
    a { color: #1a56aa; }
    footer {
      text-align: center;
      font-size: 0.82rem;
      color: #888;
      padding: 20px;
      border-top: 1px solid #ddd;
    }
  </style>
</head>
<body>

<header>
  <h1>Privacy Policy</h1>
  <p>Smart Compass &nbsp;·&nbsp; Last updated: March 4, 2026</p>
</header>

<main>

  <!-- 1. Introduction -->
  <h2>1. Introduction</h2>
  <p>
    Smart Compass ("we", "our", or "us") is developed by Smart Tools. This Privacy Policy
    explains how the <strong>Smart Compass</strong> Android application ("App") handles
    information when you use it. We are committed to protecting your privacy and complying
    with applicable data protection laws.
  </p>
  <p style="margin-top:10px;">
    By installing or using the App, you agree to the practices described in this policy.
  </p>

  <!-- 2. What the App Does -->
  <h2>2. What the App Does</h2>
  <p>Smart Compass is an all-in-one sensor toolkit that includes:</p>
  <ul>
    <li>Compass &amp; Digital Compass (magnetometer-based)</li>
    <li>GPS Compass (real-time coordinates, speed, heading, altitude)</li>
    <li>Bubble Level &amp; Spirit Level (accelerometer-based)</li>
    <li>Metal Detector (magnetometer-based proximity sensor)</li>
    <li>Sensor Info screen (reports device sensor capabilities)</li>
  </ul>

  <!-- 3. Data We Collect -->
  <h2>3. Data We Collect</h2>

  <table>
    <thead>
      <tr>
        <th>Category</th>
        <th>Data</th>
        <th>Purpose</th>
        <th>Stored?</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><span class="badge">Location</span></td>
        <td>GPS coordinates, altitude, speed, heading, accuracy</td>
        <td>GPS Compass screen — displayed on-device only</td>
        <td>No — never saved or transmitted</td>
      </tr>
      <tr>
        <td><span class="badge">Sensors</span></td>
        <td>Magnetometer, accelerometer, gyroscope readings</td>
        <td>Compass, Level, and Metal Detector features</td>
        <td>No — processed in real-time on device only</td>
      </tr>
      <tr>
        <td><span class="badge">Device Info</span></td>
        <td>Device model, OS version, sensor list</td>
        <td>Sensor Info screen — shown to the user only</td>
        <td>No — read-only, never transmitted</td>
      </tr>
      <tr>
        <td><span class="badge">App Settings</span></td>
        <td>User preferences (e.g., theme, install date)</td>
        <td>Persist app state between sessions</td>
        <td>Yes — stored locally on your device only</td>
      </tr>
      <tr>
        <td><span class="badge">Advertising</span></td>
        <td>Ad Identifier (GAID / Android Advertising ID)</td>
        <td>Serve personalised banner ads via Google AdMob</td>
        <td>Managed by Google — see Google's policy below</td>
      </tr>
    </tbody>
  </table>

  <div class="highlight">
    <strong>We do not operate our own servers.</strong> The App does not transmit any
    sensor data, location data, or personal information to our systems.
  </div>

  <!-- 4. Permissions -->
  <h2>4. Permissions Requested</h2>
  <table>
    <thead>
      <tr>
        <th>Permission</th>
        <th>Why it is needed</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td><code>ACCESS_FINE_LOCATION</code></td>
        <td>Required for high-accuracy GPS fix in the GPS Compass screen</td>
      </tr>
      <tr>
        <td><code>ACCESS_COARSE_LOCATION</code></td>
        <td>Fallback location used when fine location is unavailable</td>
      </tr>
      <tr>
        <td><code>INTERNET</code></td>
        <td>Required to load and display banner advertisements via Google AdMob</td>
      </tr>
      <tr>
        <td><code>VIBRATE</code></td>
        <td>Optional haptic feedback in the Metal Detector screen</td>
      </tr>
      <tr>
        <td><code>ACCESS_NETWORK_STATE</code></td>
        <td>Used internally by Google AdMob to check network availability</td>
      </tr>
    </tbody>
  </table>
  <p style="margin-top:12px;">
    Location permission is requested only when you open the GPS Compass screen and is
    never accessed in the background. You may deny the permission; all other features
    will continue to work normally.
  </p>

  <!-- 5. Third-Party Services -->
  <h2>5. Third-Party Services</h2>

  <h2 style="font-size:0.95rem; border:none; margin-top:16px;">5.1 Google AdMob</h2>
  <p>
    The App uses <strong>Google AdMob</strong> to display banner advertisements. AdMob
    may collect and use your device's Advertising ID and certain device information to
    serve relevant ads. The collection and use of that data is governed by
    <a href="https://policies.google.com/privacy" target="_blank" rel="noopener">
      Google's Privacy Policy
    </a>.
  </p>
  <p style="margin-top:8px;">
    You can opt out of personalised advertising at any time via
    <strong>Android Settings → Google → Ads → Opt out of Ads Personalisation</strong>.
  </p>

  <h2 style="font-size:0.95rem; border:none; margin-top:16px;">5.2 Google Play Services &amp; In-App Review</h2>
  <p>
    The App uses Google Play Services and the In-App Review API, which may collect
    standard usage metrics as described in
    <a href="https://policies.google.com/privacy" target="_blank" rel="noopener">
      Google's Privacy Policy
    </a>.
  </p>

  <!-- 6. Data Retention -->
  <h2>6. Data Retention</h2>
  <p>
    We do not collect or retain any personal data on our systems. Local preferences
    stored by the App (via Android's SharedPreferences) are kept on your device and
    are deleted automatically when you uninstall the App.
  </p>

  <!-- 7. Children's Privacy -->
  <h2>7. Children's Privacy</h2>
  <p>
    The App is not directed to children under the age of 13. We do not knowingly
    collect personal information from children. If you believe a child under 13 has
    provided personal data through the App, please contact us so we can take
    appropriate action.
  </p>

  <!-- 8. Data Security -->
  <h2>8. Data Security</h2>
  <p>
    Because the App does not transmit personal data to external servers, the risk of
    a data breach affecting your personal information is minimal. All sensor data and
    location data are processed exclusively in device memory and discarded when the
    screen is closed.
  </p>

  <!-- 9. Your Rights -->
  <h2>9. Your Rights</h2>
  <p>Depending on your jurisdiction, you may have the right to:</p>
  <ul>
    <li>Access, correct, or delete personal data we hold about you.</li>
    <li>Object to or restrict certain processing activities.</li>
    <li>Withdraw consent at any time (e.g., by revoking location permission).</li>
    <li>Opt out of personalised advertising as described in Section 5.1.</li>
  </ul>
  <p style="margin-top:10px;">
    Since we do not collect personal data on our servers, most requests can be
    fulfilled entirely by managing app permissions and settings on your device.
  </p>

  <!-- 10. Changes -->
  <h2>10. Changes to This Policy</h2>
  <p>
    We may update this Privacy Policy from time to time. Any changes will be posted
    on this page with a revised "Last updated" date. Continued use of the App after
    changes are posted constitutes your acceptance of the updated policy.
  </p>

  <!-- 11. Contact -->
  <h2>11. Contact Us</h2>
  <p>
    If you have any questions, concerns, or requests regarding this Privacy Policy,
    please contact us at:
  </p>
  <ul style="margin-top:8px;">
    <li><strong>App Name:</strong> Smart Compass</li>
    <li><strong>Developer:</strong> Smart Tools</li>
    <li><strong>Email:</strong> <a href="mailto:gowdhamisankar@gmail.com">gowdhamisankar@gmail.com</a></li>
    <li><strong>Package ID:</strong> com.smarttools.smart_compass</li>
  </ul>

</main>

<footer>
  &copy; 2026 Smart Tools. All rights reserved. &nbsp;|&nbsp; Smart Compass!
</footer>

</body>
</html>