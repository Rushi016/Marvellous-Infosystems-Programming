import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { ChildComponent } from "./child/child.component";
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [RouterOutlet, ChildComponent, FormsModule],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  public ChildMessage : any;
  public child : any;
  public ParentMessage : any;

  public SendToChild()
  {
    this.child = this.ParentMessage;
  }
}
