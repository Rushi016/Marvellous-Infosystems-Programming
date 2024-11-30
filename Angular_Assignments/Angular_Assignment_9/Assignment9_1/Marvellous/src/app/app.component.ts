import { Component } from '@angular/core';
import { MyRevPipe } from './my-rev.pipe';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [MyRevPipe,FormsModule],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent
{
 public Name : string = "";
}
